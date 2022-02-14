
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selector {int failed_paths; int valid_paths; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct selector* FUNC_1 (int,int ) ;

__attribute__((used)) static struct selector *FUNC_2(void)
{
 struct selector *VAR_1 = FUNC_1(sizeof(*VAR_1), VAR_0);

 if (VAR_1) {
  FUNC_0(&VAR_1->valid_paths);
  FUNC_0(&VAR_1->failed_paths);
 }

 return VAR_1;
}
