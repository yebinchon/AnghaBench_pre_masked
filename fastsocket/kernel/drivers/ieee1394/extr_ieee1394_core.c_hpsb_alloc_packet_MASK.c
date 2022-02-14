
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_packet {int generation; size_t allocated_data_size; int embedded_data; int data; int refcnt; int queue; int driver_list; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 struct hpsb_packet* FUNC_2 (int,int ) ;

struct hpsb_packet *FUNC_3(size_t VAR_2)
{
 struct hpsb_packet *VAR_3;

 VAR_2 = ((VAR_2 + 3) & ~3);

 VAR_3 = FUNC_2(sizeof(*VAR_3) + VAR_2, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->state = VAR_1;
 VAR_3->generation = -1;
 FUNC_0(&VAR_3->driver_list);
 FUNC_0(&VAR_3->queue);
 FUNC_1(&VAR_3->refcnt, 1);

 if (VAR_2) {
  VAR_3->data = VAR_3->embedded_data;
  VAR_3->allocated_data_size = VAR_2;
 }
 return VAR_3;
}
