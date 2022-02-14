
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io_region {scalar_t__ offset; int size; } ;
struct TYPE_2__ {scalar_t__ address; } ;


 struct io_region const* FUNC_0 (struct io_region*) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int,struct io_region const*) ;
 struct io_region* VAR_2 ;
 int FUNC_3 (scalar_t__,int ,char*) ;

__attribute__((used)) static int FUNC_4(int VAR_3)
{
 const struct io_region *VAR_4;

 for (VAR_4 = VAR_2; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
  if (!FUNC_3(VAR_1->address + VAR_4->offset, VAR_4->size, "floppy")) {
   FUNC_1("Floppy io-port 0x%04lx in use\n", VAR_1->address + VAR_4->offset);
   FUNC_2(VAR_3, VAR_4);
   return -VAR_0;
  }
 }
 return 0;
}
