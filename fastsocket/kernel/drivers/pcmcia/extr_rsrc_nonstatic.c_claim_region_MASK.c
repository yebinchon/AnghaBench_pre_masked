
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct pcmcia_socket {scalar_t__ cb_dev; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct resource VAR_2 ;
 struct resource VAR_3 ;
 int FUNC_0 (struct resource*) ;
 struct resource* FUNC_1 (int ,int ,int,char*) ;
 struct resource* FUNC_2 (scalar_t__,struct resource*) ;
 scalar_t__ FUNC_3 (struct resource*,struct resource*) ;

__attribute__((used)) static struct resource *
FUNC_4(struct pcmcia_socket *VAR_4, resource_size_t VAR_5,
  resource_size_t VAR_6, int VAR_7, char *VAR_8)
{
 struct resource *VAR_9, *VAR_10;

 VAR_10 = VAR_7 & VAR_1 ? &VAR_2 : &VAR_3;
 VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_7 | VAR_0, VAR_8);

 if (VAR_9) {




  if (!VAR_10 || FUNC_3(VAR_10, VAR_9)) {
   FUNC_0(VAR_9);
   VAR_9 = ((void*)0);
  }
 }
 return VAR_9;
}
