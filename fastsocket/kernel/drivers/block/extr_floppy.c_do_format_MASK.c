
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct format_descr {scalar_t__ track; scalar_t__ head; } ;
struct TYPE_5__ {scalar_t__ tracks; } ;
struct TYPE_4__ {scalar_t__ track; scalar_t__ head; int sect; int fmt_gap; } ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 TYPE_1__* VAR_2 ;
 int * VAR_3 ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct format_descr VAR_7 ;
 int FUNC_3 () ;
 int VAR_8 ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(int VAR_9, struct format_descr *VAR_10)
{
 int VAR_11;

 FUNC_2(VAR_9, 1);
 FUNC_4(VAR_9);
 if (!VAR_2 ||
     VAR_2->track > VAR_0->tracks ||
     VAR_10->track >= VAR_2->track ||
     VAR_10->head >= VAR_2->head ||
     (VAR_2->sect << 2) % (1 << FUNC_0(VAR_2)) ||
     !VAR_2->fmt_gap) {
  FUNC_3();
  return -VAR_1;
 }
 VAR_7 = *VAR_10;
 VAR_6 = 0;
 VAR_3 = &VAR_5;
 VAR_4 = &VAR_6;
 FUNC_1(VAR_8);
 FUNC_3();
 return VAR_11;
}
