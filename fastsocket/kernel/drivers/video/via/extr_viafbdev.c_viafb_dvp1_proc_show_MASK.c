
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct seq_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct seq_file*,char*,int,int,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_4, void *VAR_5)
{
 u8 VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
 VAR_6 = FUNC_1(VAR_2, VAR_0) & 0x0f;
 VAR_7 = (FUNC_1(VAR_3, VAR_1) & 0x0c) >> 2;
 VAR_8 = FUNC_1(VAR_3, VAR_1) & 0x03;
 FUNC_0(VAR_4, "%x %x %x\n", VAR_6, VAR_7, VAR_8);
 return 0;
}
