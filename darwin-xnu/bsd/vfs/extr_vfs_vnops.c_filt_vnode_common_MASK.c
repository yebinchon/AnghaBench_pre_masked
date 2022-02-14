
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_3__* vnode_t ;
struct knote {int kn_flags; int kn_filter; long kn_sfflags; long kn_fflags; int kn_data; TYPE_2__* kn_fp; } ;
struct TYPE_9__ {int v_lock; } ;
struct TYPE_8__ {TYPE_1__* f_fglob; } ;
struct TYPE_7__ {int fg_offset; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_4(struct knote *VAR_5, vnode_t VAR_6, long VAR_7)
{
 int VAR_8 = 0;

 FUNC_0(&VAR_6->v_lock, VAR_3);


 if (VAR_4 == VAR_7) {
  VAR_5->kn_flags |= (VAR_0 | VAR_1);
  VAR_8 = 1;

  if ((VAR_5->kn_filter == 129) && (VAR_5->kn_sfflags & VAR_4)) {
   VAR_5->kn_fflags |= VAR_4;
  }
 } else {
  switch(VAR_5->kn_filter) {
   case 130:
    VAR_5->kn_data = FUNC_2(VAR_6, VAR_5->kn_fp->f_fglob->fg_offset, (VAR_5->kn_flags & VAR_2));

    if (VAR_5->kn_data != 0) {
     VAR_8 = 1;
    }
    break;
   case 128:
    VAR_5->kn_data = FUNC_3(VAR_6);

    if (VAR_5->kn_data != 0) {
     VAR_8 = 1;
    }
    break;
   case 129:

    if (VAR_5->kn_sfflags & VAR_7) {
     VAR_5->kn_fflags |= VAR_7;
    }
    if (VAR_5->kn_fflags != 0) {
     VAR_8 = 1;
    }
    break;
   default:
    FUNC_1("Invalid knote filter on a vnode!\n");
  }
 }
 return (VAR_8);
}
