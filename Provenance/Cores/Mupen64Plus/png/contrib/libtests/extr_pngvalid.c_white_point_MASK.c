
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ Z; scalar_t__ Y; scalar_t__ X; } ;
struct TYPE_10__ {scalar_t__ Z; scalar_t__ Y; scalar_t__ X; } ;
struct TYPE_9__ {scalar_t__ Z; scalar_t__ Y; scalar_t__ X; } ;
struct TYPE_11__ {TYPE_1__ blue; TYPE_3__ green; TYPE_2__ red; } ;
typedef TYPE_4__ color_encoding ;
struct TYPE_12__ {scalar_t__ Z; scalar_t__ Y; scalar_t__ X; } ;
typedef TYPE_5__ CIE_color ;



__attribute__((used)) static CIE_color
FUNC_0(const color_encoding *VAR_0)
{
   CIE_color VAR_1;

   VAR_1.X = VAR_0->red.X + VAR_0->green.X + VAR_0->blue.X;
   VAR_1.Y = VAR_0->red.Y + VAR_0->green.Y + VAR_0->blue.Y;
   VAR_1.Z = VAR_0->red.Z + VAR_0->green.Z + VAR_0->blue.Z;

   return VAR_1;
}
