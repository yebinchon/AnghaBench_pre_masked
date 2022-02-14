
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct wl1271 {int * mbox_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int,int) ;
 unsigned long FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct wl1271*,int ,int*,int,int) ;

int FUNC_7(struct wl1271 *VAR_7,
      u32 VAR_8, bool *VAR_9)
{
 u32 *VAR_10;
 u32 VAR_11;
 unsigned long VAR_12;
 u16 VAR_13 = 0;
 int VAR_14 = 0;

 *VAR_9 = 0;

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_3 | VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_12 = VAR_6 + FUNC_2(VAR_4);

 do {
  if (FUNC_3(VAR_6, VAR_12)) {
   FUNC_5(VAR_0, "timeout waiting for event %d",
         (int)VAR_8);
   *VAR_9 = 1;
   goto out;
  }

  VAR_13++;
  if (VAR_13 < VAR_5)
   FUNC_4(50, 51);
  else
   FUNC_4(1000, 5000);


  VAR_14 = FUNC_6(VAR_7, VAR_7->mbox_ptr[0], VAR_10,
      sizeof(*VAR_10), 0);
  if (VAR_14 < 0)
   goto out;

  VAR_11 = *VAR_10 & VAR_8;

  VAR_14 = FUNC_6(VAR_7, VAR_7->mbox_ptr[1], VAR_10,
      sizeof(*VAR_10), 0);
  if (VAR_14 < 0)
   goto out;

  VAR_11 |= *VAR_10 & VAR_8;
 } while (!VAR_11);

out:
 FUNC_0(VAR_10);
 return VAR_14;
}
