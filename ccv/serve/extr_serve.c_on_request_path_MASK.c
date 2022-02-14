
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t cursor; scalar_t__ uri; } ;
typedef TYPE_1__ ebb_request_extras ;
struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_2__ ebb_request ;


 int FUNC_0 (scalar_t__,char const*,size_t) ;

__attribute__((used)) static void FUNC_1(ebb_request* VAR_0, const char* VAR_1, size_t VAR_2)
{
 ebb_request_extras* VAR_3 = (ebb_request_extras*)VAR_0->data;
 if (VAR_2 + VAR_3->cursor < 256)
  FUNC_0(VAR_3->uri + VAR_3->cursor, VAR_1, VAR_2);
 VAR_3->cursor += VAR_2;
}
