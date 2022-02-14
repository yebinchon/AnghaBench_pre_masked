
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_cam_entry {scalar_t__ stream_irq; scalar_t__ streaming; int wq_stream; struct parport* port; struct pardevice* pdev; } ;
struct parport {int modes; } ;
struct pardevice {int dummy; } ;
struct cam_data {int cam_data_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct cam_data* FUNC_1 (int *,struct pp_cam_entry*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pp_cam_entry*) ;
 struct pp_cam_entry* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 struct pardevice* FUNC_6 (struct parport*,char*,int *,int *,int *,int ,struct pp_cam_entry*) ;
 int FUNC_7 (struct pardevice*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct parport *VAR_7)
{
 struct pardevice *VAR_8 = ((void*)0);
 struct pp_cam_entry *VAR_9;
 struct cam_data *VAR_10;

 if (!(VAR_7->modes & VAR_3)) {
  FUNC_0("port is not supported by CPiA driver\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_4(sizeof(struct pp_cam_entry), VAR_2);
 if (VAR_9 == ((void*)0)) {
  FUNC_0("failed to allocate camera structure\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_6(VAR_7, "cpia_pp", ((void*)0), ((void*)0),
           ((void*)0), 0, VAR_9);

 if (!VAR_8) {
  FUNC_0("failed to parport_register_device\n");
  FUNC_3(VAR_9);
  return -VAR_1;
 }

 VAR_9->pdev = VAR_8;
 VAR_9->port = VAR_7;
 FUNC_2(&VAR_9->wq_stream);

 VAR_9->streaming = 0;
 VAR_9->stream_irq = 0;

 if((VAR_10 = FUNC_1(&VAR_6, VAR_9)) == ((void*)0)) {
  FUNC_0("failed to cpia_register_camera\n");
  FUNC_7(VAR_8);
  FUNC_3(VAR_9);
  return -VAR_1;
 }
 FUNC_8( &VAR_5 );
 FUNC_5( &VAR_10->cam_data_list, &VAR_4 );
 FUNC_9( &VAR_5 );

 return 0;
}
