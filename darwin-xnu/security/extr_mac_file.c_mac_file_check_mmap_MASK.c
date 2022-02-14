
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ucred {int dummy; } ;
struct fileglob {int fg_label; } ;


 int FUNC_0 (int ,struct ucred*,struct fileglob*,int ,int,int,int ,int*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;

int
FUNC_2(struct ucred *VAR_1, struct fileglob *VAR_2, int VAR_3,
    int VAR_4, uint64_t VAR_5, int *VAR_6)
{
 int VAR_7;
 int VAR_8;

 VAR_8 = *VAR_6;
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_2->fg_label, VAR_3, VAR_4, VAR_5, &VAR_8);
 if ((VAR_8 | *VAR_6) != *VAR_6)
  FUNC_1("file_check_mmap increased max protections");
 *VAR_6 = VAR_8;
 return (VAR_7);
}
