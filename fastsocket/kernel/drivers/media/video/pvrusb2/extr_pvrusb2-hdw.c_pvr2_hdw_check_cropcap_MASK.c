
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {scalar_t__ cropcap_stale; } ;


 int VAR_0 ;
 int FUNC_0 (struct pvr2_hdw*) ;

__attribute__((used)) static int FUNC_1(struct pvr2_hdw *VAR_1)
{
 if (!VAR_1->cropcap_stale) {
  return 0;
 }
 FUNC_0(VAR_1);
 if (VAR_1->cropcap_stale) {
  return -VAR_0;
 }
 return 0;
}
