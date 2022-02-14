
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yam_mcs {int bitrate; unsigned char* bits; struct yam_mcs* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char* FUNC_0 (int *,int,int ) ;
 struct yam_mcs* VAR_2 ;

__attribute__((used)) static unsigned char *FUNC_1(int VAR_3)
{
 struct yam_mcs *VAR_4;

 VAR_4 = VAR_2;
 while (VAR_4) {
  if (VAR_4->bitrate == VAR_3)
   return VAR_4->bits;
  VAR_4 = VAR_4->next;
 }


 switch (VAR_3) {
 case 1200:

  return FUNC_0(((void*)0), VAR_3, VAR_0);
 default:

  return FUNC_0(((void*)0), VAR_3, VAR_1);
 }
}
