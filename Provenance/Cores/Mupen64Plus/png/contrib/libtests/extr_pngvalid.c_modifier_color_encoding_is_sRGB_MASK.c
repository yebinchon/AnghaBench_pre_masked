
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ current_gamma; TYPE_1__* current_encoding; TYPE_1__* encodings; } ;
typedef TYPE_2__ png_modifier ;
struct TYPE_4__ {scalar_t__ gamma; } ;



__attribute__((used)) static int
FUNC_0(const png_modifier *VAR_0)
{
   return VAR_0->current_encoding != 0 && VAR_0->current_encoding == VAR_0->encodings &&
      VAR_0->current_encoding->gamma == VAR_0->current_gamma;
}
