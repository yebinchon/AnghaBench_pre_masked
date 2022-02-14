
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kev_netevent_clat46_data {int euuid; int epid; int clat46_event_code; } ;


 int FUNC_0 (int *,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(void *VAR_2)
{
        struct kev_netevent_clat46_data *VAR_3 =
            (struct kev_netevent_clat46_data *)VAR_2;

        FUNC_0(&VAR_1, VAR_0,
            VAR_3->clat46_event_code, VAR_3->epid,
            VAR_3->euuid);
}
