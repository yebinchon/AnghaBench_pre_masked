
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp_neighbor_e {int node; struct uwb_dev* uwb_dev; } ;
struct wlp {int neighbors; } ;
struct uwb_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct wlp_neighbor_e* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct uwb_dev*) ;
 int FUNC_4 (struct wlp_neighbor_e*) ;

__attribute__((used)) static
int FUNC_5(struct wlp *VAR_2, struct uwb_dev *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;
 struct wlp_neighbor_e *VAR_6;
 VAR_5 = 1;
 if (VAR_5) {

  VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
  if (VAR_6 == ((void*)0)) {
   FUNC_0(&VAR_3->dev, "Unable to create memory for "
    "new neighbor. \n");
   VAR_4 = -VAR_0;
   goto error_no_mem;
  }
  FUNC_4(VAR_6);
  FUNC_3(VAR_3);
  VAR_6->uwb_dev = VAR_3;
  FUNC_2(&VAR_6->node, &VAR_2->neighbors);
 }
error_no_mem:
 return VAR_4;
}
