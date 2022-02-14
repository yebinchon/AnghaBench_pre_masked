
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rio_mport {TYPE_1__* inb_msg; int * riores; } ;
struct resource {int dummy; } ;
struct TYPE_2__ {void (* mcback ) (struct rio_mport*,void*,int,int) ;struct resource* res; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct resource*) ;
 struct resource* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct resource*) ;
 int FUNC_3 (struct resource*,int,int) ;
 int FUNC_4 (struct rio_mport*,void*,int,int) ;

int FUNC_5(struct rio_mport *VAR_3,
    void *VAR_4,
    int VAR_5,
    int VAR_6,
    void (*VAR_7) (struct rio_mport * VAR_8, void *VAR_9, int VAR_10,
           int VAR_11))
{
 int VAR_12 = 0;

 struct resource *VAR_13 = FUNC_1(sizeof(struct resource), VAR_1);

 if (VAR_13) {
  FUNC_3(VAR_13, VAR_5, VAR_5);


  if ((VAR_12 =
       FUNC_2(&VAR_3->riores[VAR_2],
          VAR_13)) < 0) {
   FUNC_0(VAR_13);
   goto out;
  }

  VAR_3->inb_msg[VAR_5].res = VAR_13;


  VAR_3->inb_msg[VAR_5].mcback = VAR_7;

  VAR_12 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6);
 } else
  VAR_12 = -VAR_0;

      out:
 return VAR_12;
}
