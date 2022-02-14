
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_init_out {int minor; scalar_t__ max_background; scalar_t__ congestion_threshold; } ;
struct fuse_conn {scalar_t__ max_background; scalar_t__ congestion_threshold; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__*) ;

__attribute__((used)) static void FUNC_2(struct fuse_conn *VAR_3, struct fuse_init_out *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_0);

 if (VAR_4->minor < 13)
  return;

 FUNC_1(&VAR_1);
 FUNC_1(&VAR_2);

 if (VAR_4->max_background) {
  VAR_3->max_background = VAR_4->max_background;

  if (!VAR_5 && VAR_3->max_background > VAR_1)
   VAR_3->max_background = VAR_1;
 }
 if (VAR_4->congestion_threshold) {
  VAR_3->congestion_threshold = VAR_4->congestion_threshold;

  if (!VAR_5 &&
      VAR_3->congestion_threshold > VAR_2)
   VAR_3->congestion_threshold = VAR_2;
 }
}
