
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tag; int cs; } ;
typedef TYPE_1__ CharsetTag ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1 (CharsetTag *VAR_1, CharsetTag *VAR_2) {
  if (VAR_1->tag == VAR_0 || VAR_2->tag == VAR_0)
    return 0;
  else return FUNC_0(VAR_1->cs, VAR_2->cs);
}
