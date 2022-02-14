
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct v4l2_dbg_chip_ident {TYPE_1__ match; int ident; scalar_t__ revision; } ;
struct ivtv_open_id {struct ivtv* itv; } ;
struct ivtv {scalar_t__ has_cx23415; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ivtv*,int ,int ,struct v4l2_dbg_chip_ident*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_9, void *VAR_10, struct v4l2_dbg_chip_ident *VAR_11)
{
 struct ivtv *VAR_12 = ((struct ivtv_open_id *)VAR_10)->itv;

 VAR_11->ident = VAR_6;
 VAR_11->revision = 0;
 if (VAR_11->match.type == VAR_1) {
  if (FUNC_1(&VAR_11->match))
   VAR_11->ident = VAR_12->has_cx23415 ? VAR_4 : VAR_5;
  return 0;
 }
 if (VAR_11->match.type != VAR_3 &&
     VAR_11->match.type != VAR_2)
  return -VAR_0;

 return FUNC_0(VAR_12, VAR_7, VAR_8, VAR_11);
}
