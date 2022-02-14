
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wwn_t ;
typedef scalar_t__ u8 ;
struct bfad_s {int bfa; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__*,int *) ;

int
FUNC_1(struct bfad_s *VAR_1)
{
 u8 VAR_2 = 0;
 wwn_t VAR_3[VAR_0];
 int VAR_4;
 FUNC_0(&VAR_1->bfa, &VAR_2, VAR_3);

 if (VAR_2 > 0)

  VAR_4 = 30;
 else

  VAR_4 = 0;

 return VAR_4;
}
