
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef TYPE_5__* Type ;
struct TYPE_19__ {int align; scalar_t__ size; } ;
struct TYPE_18__ {int offset; TYPE_8__* type; struct TYPE_18__* link; scalar_t__ lsb; } ;
struct TYPE_16__ {TYPE_3__* sym; } ;
struct TYPE_17__ {int align; TYPE_4__ u; } ;
struct TYPE_13__ {TYPE_6__* flist; } ;
struct TYPE_14__ {TYPE_1__ s; } ;
struct TYPE_15__ {TYPE_2__ u; } ;
struct TYPE_12__ {int (* space ) (int) ;} ;
typedef TYPE_6__* Field ;


 TYPE_11__* VAR_0 ;
 char FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_2 (TYPE_8__*,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 char VAR_1 ;

__attribute__((used)) static int FUNC_6(int VAR_2, Type VAR_3, int VAR_4) {
 int VAR_5, VAR_6 = 0;
 Field VAR_7 = VAR_3->u.sym->u.s.flist;

 do {
  if (VAR_7->offset > VAR_6) {
   (*VAR_0->space)(VAR_7->offset - VAR_6);
   VAR_6 += VAR_7->offset - VAR_6;
  }
  if (VAR_7->lsb) {
   Field VAR_8 = VAR_7;
   while (VAR_8->link && VAR_8->link->offset == VAR_7->offset)
    VAR_8 = VAR_8->link;
   VAR_6 += FUNC_1(VAR_7, VAR_8->link);
   VAR_7 = VAR_8;
  } else {
   FUNC_2(VAR_7->type, VAR_4);
   VAR_6 += VAR_7->type->size;
  }
  if (VAR_7->link) {
   VAR_7 = VAR_7->link;
   VAR_5 = VAR_7->type->align;
  } else
   VAR_5 = VAR_3->align;
  if (VAR_5 && VAR_6%VAR_5) {
   (*VAR_0->space)(VAR_5 - VAR_6%VAR_5);
   VAR_6 = FUNC_3(VAR_6, VAR_5);
  }
  if (VAR_2 > 0 && VAR_6 >= VAR_2 || VAR_1 != ',')
   break;
  VAR_1 = FUNC_0();
 } while (VAR_1 != '}');
 return VAR_6;
}
