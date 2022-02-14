
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct parport {scalar_t__ name; } ;
struct TYPE_3__ {char* parname; int port; int device; int parq; int pardev; } ;
typedef TYPE_1__ PIA ;


 int FUNC_0 (int *) ;
 struct parport* FUNC_1 (int ) ;
 int FUNC_2 (struct parport*) ;
 int FUNC_3 (struct parport*,int ,int *,int ,int *,int ,void*) ;
 int VAR_0 ;
 int FUNC_4 (char*,int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(PIA * VAR_1, int VAR_2)
{
 struct parport *VAR_3;

 VAR_3 = FUNC_1(VAR_1->port);
 if (!VAR_3)
  return 0;

 VAR_1->pardev = FUNC_3(VAR_3,
          VAR_1->device, ((void*)0),
          VAR_0, ((void*)0), 0, (void *) VAR_1);
 FUNC_2(VAR_3);
 if (!VAR_1->pardev)
  return 0;

 FUNC_0(&VAR_1->parq);

 if (VAR_2)
  FUNC_4("%s: 0x%x is %s\n", VAR_1->device, VAR_1->port, VAR_3->name);

 VAR_1->parname = (char *) VAR_3->name;

 return 1;
}
