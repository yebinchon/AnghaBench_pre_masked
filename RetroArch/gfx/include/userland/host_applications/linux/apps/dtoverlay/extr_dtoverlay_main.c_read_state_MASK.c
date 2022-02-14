
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int d_name; } ;
struct TYPE_5__ {int count; TYPE_2__** namelist; } ;
typedef TYPE_1__ STATE_T ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (char const*,TYPE_2__***,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static STATE_T *FUNC_4(const char *VAR_2)
{
    STATE_T *VAR_3 = FUNC_2(sizeof(STATE_T));
    int VAR_4;

    if (VAR_3)
    {
 VAR_3->count = FUNC_3(VAR_2, &VAR_3->namelist, VAR_1, VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_3->count; VAR_4++)
 {
     int VAR_5 = FUNC_0(VAR_3->namelist[VAR_4]->d_name);
     if (VAR_4 != VAR_5)
  FUNC_1("Overlay sequence error");
 }
    }
    return VAR_3;
}
