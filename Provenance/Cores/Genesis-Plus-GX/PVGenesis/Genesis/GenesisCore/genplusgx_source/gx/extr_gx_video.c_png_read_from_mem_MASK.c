
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int png_structp ;
typedef int png_size_t ;
struct TYPE_2__ {scalar_t__ offset; scalar_t__ buffer; } ;
typedef TYPE_1__ png_image ;
typedef int png_bytep ;


 int FUNC_0 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2 (png_structp VAR_0, png_bytep VAR_1, png_size_t VAR_2)
{
  png_image *VAR_3 = (png_image *)FUNC_1(VAR_0);


  FUNC_0 (VAR_1, VAR_3->buffer + VAR_3->offset, VAR_2);


  VAR_3->offset += VAR_2;
}
