
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_req {int background; int list; } ;
struct fuse_conn {scalar_t__ num_background; scalar_t__ max_background; int blocked; scalar_t__ congestion_threshold; int bg_queue; int bdi; scalar_t__ bdi_initialized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fuse_conn*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct fuse_conn *VAR_2,
         struct fuse_req *VAR_3)
{
 VAR_3->background = 1;
 VAR_2->num_background++;
 if (VAR_2->num_background == VAR_2->max_background)
  VAR_2->blocked = 1;
 if (VAR_2->num_background == VAR_2->congestion_threshold &&
     VAR_2->bdi_initialized) {
  FUNC_2(&VAR_2->bdi, VAR_1);
  FUNC_2(&VAR_2->bdi, VAR_0);
 }
 FUNC_1(&VAR_3->list, &VAR_2->bg_queue);
 FUNC_0(VAR_2);
}
