
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _940_data_t ;
typedef int _940_ctl_t ;


 unsigned char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,int,int,int ,int ,int) ;
 unsigned char* VAR_8 ;
 int FUNC_2 (char*,int) ;
 int * VAR_9 ;
 int * VAR_10 ;
 unsigned char* VAR_11 ;

void FUNC_3(void)
{
 if (VAR_11 != ((void*)0)) return;

 VAR_11 = (unsigned char *) FUNC_1(0, 0x210000, VAR_3|VAR_4, VAR_1, VAR_7, 0x2000000);
 if (VAR_11 == VAR_0)
 {
  FUNC_2("mmap(shared_data) failed with %i\n", VAR_6);
  FUNC_0(1);
 }
 VAR_10 = (_940_data_t *) (VAR_11+0x100000);

 VAR_9 = (_940_ctl_t *) (VAR_11+0x200000);
 VAR_8 = (unsigned char *) FUNC_1(0, VAR_2, VAR_3|VAR_4, VAR_1, VAR_7, 0x2400000);
 if (VAR_8 == VAR_0)
 {
  FUNC_2("mmap(mp3_mem) failed with %i\n", VAR_6);
  FUNC_0(1);
 }
 VAR_5 = 1;
}
