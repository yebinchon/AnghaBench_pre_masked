
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int hw_stopped; int stopped; int name; struct slgt_info* driver_data; } ;
struct slgt_info {unsigned char const* tx_buf; int max_frame_size; int tx_count; unsigned int tbuf_current; unsigned int tbuf_count; int device_name; int lock; int * tbufs; int tx_active; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct slgt_info*) ;
 int FUNC_3 (struct slgt_info*,int ) ;
 scalar_t__ FUNC_4 (struct slgt_info*,int ,char*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct slgt_info*,unsigned char const*,int) ;
 int FUNC_8 (struct slgt_info*) ;
 int FUNC_9 (struct slgt_info*) ;

__attribute__((used)) static int FUNC_10(struct tty_struct *VAR_4,
   const unsigned char *VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 struct slgt_info *VAR_8 = VAR_4->driver_data;
 unsigned long VAR_9;
 unsigned int VAR_10;

 if (FUNC_4(VAR_8, VAR_4->name, "write"))
  goto cleanup;
 FUNC_0(("%s write count=%d\n", VAR_8->device_name, VAR_6));

 if (!VAR_8->tx_buf)
  goto cleanup;

 if (VAR_6 > VAR_8->max_frame_size) {
  VAR_7 = -VAR_2;
  goto cleanup;
 }

 if (!VAR_6)
  goto cleanup;

 if (!VAR_8->tx_active && VAR_8->tx_count) {

  FUNC_7(VAR_8, VAR_8->tx_buf, VAR_8->tx_count);
  goto start;
 }
 VAR_10 = (VAR_6/VAR_1);
 if (VAR_6 % VAR_1)
  ++VAR_10;
 if (VAR_10 > FUNC_2(VAR_8))
  goto cleanup;

 VAR_7 = VAR_8->tx_count = VAR_6;
 FUNC_7(VAR_8, VAR_5, VAR_6);
 goto start;

start:
  if (VAR_8->tx_count && !VAR_4->stopped && !VAR_4->hw_stopped) {
  FUNC_5(&VAR_8->lock,VAR_9);
  if (!VAR_8->tx_active)
    FUNC_8(VAR_8);
  else if (!(FUNC_3(VAR_8, VAR_3) & VAR_0)) {

   unsigned int VAR_11 = VAR_8->tbuf_current;
   if (!VAR_11)
    VAR_11 = VAR_8->tbuf_count;
   VAR_11--;

   if (FUNC_1(VAR_8->tbufs[VAR_11]))
    VAR_7 = 0;
  }
  if (VAR_7 > 0)
   FUNC_9(VAR_8);
  FUNC_6(&VAR_8->lock,VAR_9);
  }

cleanup:
 FUNC_0(("%s write rc=%d\n", VAR_8->device_name, VAR_7));
 return VAR_7;
}
