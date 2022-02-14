
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unit_directory {int device; } ;
struct firedtv {scalar_t__ isochannel; int subunit; } ;


 int FUNC_0 (struct firedtv*,int ,scalar_t__) ;
 struct firedtv* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct unit_directory *VAR_0)
{
 struct firedtv *VAR_1 = FUNC_1(&VAR_0->device);

 if (VAR_1->isochannel >= 0)
  FUNC_0(VAR_1, VAR_1->subunit,
         VAR_1->isochannel);
 return 0;
}
