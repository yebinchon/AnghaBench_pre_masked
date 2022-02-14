
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dst_state {int dst_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int FUNC_1 (struct dst_state*) ;
 int FUNC_2 (struct dst_state*) ;
 scalar_t__ FUNC_3 (struct dst_state*) ;
 int FUNC_4 (struct dst_state*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct dst_state*,int *,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (struct dst_state*,int *,int ) ;

__attribute__((used)) static int FUNC_10(struct dst_state* VAR_7, u8 * VAR_8, u8 *VAR_9, u8 VAR_10, int VAR_11)
{
 u8 VAR_12;

 FUNC_6(&VAR_7->dst_mutex);
 FUNC_1(VAR_7);
 FUNC_5(65);

 if (FUNC_9(VAR_7, VAR_8, VAR_10)) {
  FUNC_0(VAR_6, VAR_1, 1, " Write not successful, trying to recover");
  FUNC_2(VAR_7);
  goto error;
 }
 if ((FUNC_3(VAR_7)) < 0) {
  FUNC_0(VAR_6, VAR_0, 1, " DST PIO disable failed.");
  goto error;
 }
 if (FUNC_8(VAR_7, &VAR_12, VAR_4) < 0) {
  FUNC_0(VAR_6, VAR_1, 1, " Read not successful, trying to recover");
  FUNC_2(VAR_7);
  goto error;
 }
 if (VAR_11) {
  if (! FUNC_4(VAR_7, VAR_5)) {
   FUNC_0(VAR_6, VAR_2, 1, " 8820 not ready");
   goto error;
  }
  if (FUNC_8(VAR_7, VAR_9, 128) < 0) {
   FUNC_0(VAR_6, VAR_1, 1, " Read not successful, trying to recover");
   FUNC_2(VAR_7);
   goto error;
  }
 }
 FUNC_7(&VAR_7->dst_mutex);
 return 0;

error:
 FUNC_7(&VAR_7->dst_mutex);
 return -VAR_3;
}
