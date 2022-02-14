
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecard_request {int address; int length; int use_loader; void* buffer; int * ec; int fn; } ;
typedef int ecard_t ;


 int FUNC_0 (struct ecard_request*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(void *VAR_1, ecard_t *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 struct ecard_request VAR_6;

 VAR_6.fn = VAR_0;
 VAR_6.ec = VAR_2;
 VAR_6.address = VAR_3;
 VAR_6.length = VAR_4;
 VAR_6.use_loader = VAR_5;
 VAR_6.buffer = VAR_1;

 FUNC_0(&VAR_6);
}
