
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ idx; } ;
struct TYPE_5__ {TYPE_1__ lt_id; } ;
struct wq_prepost {TYPE_2__ wqte; } ;
struct TYPE_6__ {scalar_t__ nelem; } ;


 int FUNC_0 (int) ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 (char*) ;
 struct wq_prepost* FUNC_2 (int,int) ;
 struct wq_prepost* FUNC_3 (scalar_t__*,int) ;

__attribute__((used)) static struct wq_prepost *FUNC_4(uint64_t *VAR_1, int VAR_2)
{
 struct wq_prepost *VAR_3 = ((void*)0);





 if (VAR_1 && *VAR_1) {
  VAR_3 = FUNC_3(VAR_1, VAR_2);
  FUNC_0(VAR_3->wqte.lt_id.idx < VAR_0.nelem);
 } else {




  VAR_3 = FUNC_2(VAR_2, 1);
 }

 if (VAR_3 == ((void*)0))
  FUNC_1("Couldn't allocate prepost object!");
 return VAR_3;
}
