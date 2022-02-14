
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long data; int function; } ;
struct bfad_s {TYPE_1__ hal_tmo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

void
FUNC_3(struct bfad_s *VAR_3)
{
 FUNC_0(&VAR_3->hal_tmo);
 VAR_3->hal_tmo.function = VAR_1;
 VAR_3->hal_tmo.data = (unsigned long)VAR_3;

 FUNC_1(&VAR_3->hal_tmo,
    VAR_2 + FUNC_2(VAR_0));
}
