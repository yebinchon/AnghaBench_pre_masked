
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmf_handlers {int dummy; } ;
struct pmf_device {int link; int functions; struct pmf_handlers* handlers; int node; int ref; } ;
struct device_node {int full_name; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pmf_device*) ;
 int FUNC_3 (int *) ;
 struct pmf_device* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct device_node*) ;
 int FUNC_7 (struct device_node*) ;
 int FUNC_8 (struct pmf_device*,void*) ;
 int VAR_5 ;
 struct pmf_device* FUNC_9 (struct device_node*) ;
 int VAR_6 ;
 int FUNC_10 (struct pmf_device*) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

int FUNC_13(struct device_node *VAR_7,
   struct pmf_handlers *VAR_8,
   void *VAR_9)
{
 struct pmf_device *VAR_10;
 unsigned long VAR_11;
 int VAR_12 = 0;

 if (VAR_8 == ((void*)0))
  return -VAR_1;

 FUNC_0("pmf: registering driver for node %s\n", VAR_7->full_name);

 FUNC_11(&VAR_6, VAR_11);
 VAR_10 = FUNC_9(VAR_7);
 FUNC_12(&VAR_6, VAR_11);
 if (VAR_10 != ((void*)0)) {
  FUNC_0("pmf: already there !\n");
  FUNC_10(VAR_10);
  return -VAR_0;
 }

 VAR_10 = FUNC_4(sizeof(struct pmf_device), VAR_4);
 if (VAR_10 == ((void*)0)) {
  FUNC_0("pmf: no memory !\n");
  return -VAR_3;
 }
 FUNC_3(&VAR_10->ref);
 VAR_10->node = FUNC_6(VAR_7);
 VAR_10->handlers = VAR_8;
 FUNC_1(&VAR_10->functions);

 VAR_12 = FUNC_8(VAR_10, VAR_9);
 if (VAR_12 == 0) {
  FUNC_0("pmf: no functions, disposing.. \n");
  FUNC_7(VAR_7);
  FUNC_2(VAR_10);
  return -VAR_2;
 }

 FUNC_11(&VAR_6, VAR_11);
 FUNC_5(&VAR_10->link, &VAR_5);
 FUNC_12(&VAR_6, VAR_11);

 return 0;
}
