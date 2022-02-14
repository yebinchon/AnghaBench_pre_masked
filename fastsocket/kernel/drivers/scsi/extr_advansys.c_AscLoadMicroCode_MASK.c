
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ushort ;
typedef int ulong ;
typedef int uchar ;
typedef int PortAddr ;
typedef scalar_t__ ASC_DCNT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int const*,int) ;
 int FUNC_3 (int ,int,int ,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static ASC_DCNT
FUNC_5(PortAddr VAR_3, ushort VAR_4,
   const uchar *VAR_5, ushort VAR_6)
{
 ASC_DCNT VAR_7;
 ushort VAR_8;
 ushort VAR_9;


 VAR_8 = (ushort)(VAR_6 >> 1);
 FUNC_3(VAR_3, VAR_4, 0, VAR_8);
 FUNC_2(VAR_3, VAR_4, VAR_5, VAR_8);

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_8);
 FUNC_0(1, "chksum 0x%lx\n", (ulong)VAR_7);
 VAR_9 = (ushort)FUNC_1(VAR_3,
       (ushort)VAR_2,
       (ushort)((VAR_6 -
          VAR_4 - (ushort)
          VAR_2) /
         2));
 FUNC_0(1, "mcode_chksum 0x%lx\n", (ulong)VAR_9);
 FUNC_4(VAR_3, VAR_0, VAR_9);
 FUNC_4(VAR_3, VAR_1, VAR_6);
 return VAR_7;
}
