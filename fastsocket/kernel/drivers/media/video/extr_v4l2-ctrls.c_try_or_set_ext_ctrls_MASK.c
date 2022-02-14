
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_controls {unsigned int error_idx; unsigned int count; } ;
struct v4l2_ctrl_handler {int dummy; } ;
struct v4l2_ctrl {int flags; unsigned int ncontrols; scalar_t__ has_new; struct v4l2_ctrl** cluster; } ;
struct ctrl_helper {scalar_t__ handled; struct v4l2_ctrl* ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int,struct v4l2_ext_controls*,struct ctrl_helper*) ;
 int FUNC_1 (unsigned int,struct v4l2_ext_controls*,struct ctrl_helper*,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct v4l2_ctrl*,int) ;
 int VAR_5 ;
 int FUNC_3 (struct v4l2_ctrl*) ;
 int FUNC_4 (struct v4l2_ctrl*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_ctrl_handler *VAR_6,
    struct v4l2_ext_controls *VAR_7,
    struct ctrl_helper *VAR_8,
    bool VAR_9)
{
 unsigned VAR_10, VAR_11;
 int VAR_12 = 0;

 VAR_7->error_idx = VAR_7->count;
 for (VAR_10 = 0; VAR_10 < VAR_7->count; VAR_10++) {
  struct v4l2_ctrl *VAR_13 = VAR_8[VAR_10].ctrl;

  if (!VAR_9)
   VAR_7->error_idx = VAR_10;

  if (VAR_13->flags & VAR_3)
   return -VAR_0;






  if (VAR_9 && (VAR_13->flags & VAR_2))
   return -VAR_1;
 }

 for (VAR_10 = 0; !VAR_12 && VAR_10 < VAR_7->count; VAR_10++) {
  struct v4l2_ctrl *VAR_14 = VAR_8[VAR_10].ctrl;
  struct v4l2_ctrl *VAR_15 = VAR_14->cluster[0];

  VAR_7->error_idx = VAR_10;

  if (VAR_8[VAR_10].handled)
   continue;

  FUNC_3(VAR_14);


  for (VAR_11 = 0; VAR_11 < VAR_15->ncontrols; VAR_11++)
   if (VAR_15->cluster[VAR_11])
    VAR_15->cluster[VAR_11]->has_new = 0;



  VAR_12 = FUNC_1(VAR_10, VAR_7, VAR_8, VAR_5);

  if (!VAR_12)
   VAR_12 = FUNC_2(VAR_15, VAR_9);


  if (!VAR_12)
   VAR_12 = FUNC_1(VAR_10, VAR_7, VAR_8, VAR_4);

  FUNC_4(VAR_14);
  FUNC_0(VAR_10, VAR_7, VAR_8);
 }
 return VAR_12;
}
