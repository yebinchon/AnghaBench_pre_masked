
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct resource_node {int end; int start; } ;
struct range_node {int rangeno; int end; int start; } ;
struct bus_node {int noIORanges; int noMemRanges; int noPFMemRanges; struct range_node* rangePFMem; struct range_node* rangeMem; struct range_node* rangeIO; int bus_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 struct bus_node* FUNC_1 (int) ;
 struct range_node* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4 (struct bus_node *VAR_3, struct resource_node *VAR_4, struct resource_node *VAR_5, struct resource_node *VAR_6, u8 VAR_7)
{
 struct range_node *VAR_8 = ((void*)0);
 struct range_node *VAR_9 = ((void*)0);
 struct range_node *VAR_10 = ((void*)0);
 struct bus_node *VAR_11 = ((void*)0);


 if (VAR_7 != 0xFF) {
  VAR_11 = FUNC_1 (VAR_7);
  if (!VAR_11) {
   FUNC_0 ("strange, cannot find bus which is supposed to be at the system... something is terribly wrong...\n");
   return -VAR_0;
  }

  FUNC_3 (&VAR_3->bus_list, &VAR_11->bus_list);
 }
 if (VAR_4) {
  VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_2);
  if (!VAR_8) {
   FUNC_0 ("out of system memory\n");
   return -VAR_1;
  }
  VAR_8->start = VAR_4->start;
  VAR_8->end = VAR_4->end;
  VAR_8->rangeno = 1;
  VAR_3->noIORanges = 1;
  VAR_3->rangeIO = VAR_8;
 }
 if (VAR_5) {
  VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_2);
  if (!VAR_9) {
   FUNC_0 ("out of system memory\n");
   return -VAR_1;
  }
  VAR_9->start = VAR_5->start;
  VAR_9->end = VAR_5->end;
  VAR_9->rangeno = 1;
  VAR_3->noMemRanges = 1;
  VAR_3->rangeMem = VAR_9;
 }
 if (VAR_6) {
  VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_2);
  if (!VAR_10) {
   FUNC_0 ("out of system memory\n");
   return -VAR_1;
  }
  VAR_10->start = VAR_6->start;
  VAR_10->end = VAR_6->end;
  VAR_10->rangeno = 1;
  VAR_3->noPFMemRanges = 1;
  VAR_3->rangePFMem = VAR_10;
 }
 return 0;
}
