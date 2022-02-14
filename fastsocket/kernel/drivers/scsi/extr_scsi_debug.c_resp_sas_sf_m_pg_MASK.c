
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sas_sf_m_pg ;


 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_2(unsigned char * VAR_0, int VAR_1, int VAR_2)
{
 unsigned char VAR_3[] = {0x19, 0x6,
  0x6, 0x0, 0x7, 0xd0, 0x0, 0x0};

 FUNC_0(VAR_0, VAR_3, sizeof(VAR_3));
 if (1 == VAR_1)
  FUNC_1(VAR_0 + 2, 0, sizeof(VAR_3) - 2);
 return sizeof(VAR_3);
}
