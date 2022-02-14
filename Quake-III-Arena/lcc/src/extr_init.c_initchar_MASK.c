
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int Type ;
struct TYPE_10__ {int (* defstring ) (int,char*) ;} ;
struct TYPE_7__ {int i; } ;
struct TYPE_6__ {TYPE_2__ v; } ;
struct TYPE_9__ {TYPE_1__ u; } ;
struct TYPE_8__ {int size; } ;


 TYPE_5__* VAR_0 ;
 char FUNC_0 () ;
 TYPE_4__* FUNC_1 (int ) ;
 TYPE_3__* VAR_1 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*) ;
 char VAR_2 ;

__attribute__((used)) static int FUNC_4(int VAR_3, Type VAR_4) {
 int VAR_5 = 0;
 char VAR_6[16], *VAR_7 = VAR_6;

 do {
  *VAR_7++ = FUNC_1(VAR_4)->u.v.i;
  if (++VAR_5%VAR_1->size == 0) {
   (*VAR_0->defstring)(VAR_1->size, VAR_6);
   VAR_7 = VAR_6;
  }
  if (VAR_3 > 0 && VAR_5 >= VAR_3 || VAR_2 != ',')
   break;
  VAR_2 = FUNC_0();
 } while (VAR_2 != '}');
 if (VAR_7 > VAR_6)
  (*VAR_0->defstring)(VAR_7 - VAR_6, VAR_6);
 return VAR_5;
}
