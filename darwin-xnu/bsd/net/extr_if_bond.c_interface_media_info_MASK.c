
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_info {scalar_t__ ifm_count; int ifm_active; int mi_active; int ifm_status; int mi_status; } ;
struct ifnet {int dummy; } ;
struct ifmediareq {scalar_t__ ifm_count; int ifm_active; int mi_active; int ifm_status; int mi_status; } ;
typedef int mi ;
typedef int ifmr ;


 int VAR_0 ;
 int FUNC_0 (struct media_info*,int) ;
 scalar_t__ FUNC_1 (struct ifnet*,int ,int ,struct media_info*) ;

__attribute__((used)) static struct media_info
FUNC_2(struct ifnet * VAR_1)
{
    struct ifmediareq VAR_2;
    struct media_info VAR_3;

    FUNC_0(&VAR_3, sizeof(VAR_3));
    FUNC_0(&VAR_2, sizeof(VAR_2));
    if (FUNC_1(VAR_1, 0, VAR_0, &VAR_2) == 0) {
 if (VAR_2.ifm_count != 0) {
     VAR_3.mi_status = VAR_2.ifm_status;
     VAR_3.mi_active = VAR_2.ifm_active;
 }
    }
    return (VAR_3);
}
