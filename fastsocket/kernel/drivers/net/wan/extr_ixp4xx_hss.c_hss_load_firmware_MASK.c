
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {int initialized; int id; int dev; int npe; } ;
struct msg {int data32; int cmd; int data16a; int data8a; int hss_port; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct port*,struct msg*,char*) ;
 int FUNC_1 (struct msg*,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct port *VAR_9)
{
 struct msg VAR_10;
 int VAR_11;

 if (VAR_9->initialized)
  return 0;

 if (!FUNC_4(VAR_9->npe) &&
     (VAR_11 = FUNC_2(VAR_9->npe, FUNC_3(VAR_9->npe),
         VAR_9->dev)))
  return VAR_11;


 FUNC_1(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.cmd = VAR_3;
 VAR_10.hss_port = VAR_9->id;
 VAR_10.data8a = VAR_2;
 FUNC_0(VAR_9, &VAR_10, "HSS_SET_PKT_PIPES");

 VAR_10.cmd = VAR_5;
 VAR_10.data8a = VAR_4;
 FUNC_0(VAR_9, &VAR_10, "HSS_SET_PKT_FIFO");

 VAR_10.cmd = VAR_7;
 VAR_10.data8a = VAR_1;


 FUNC_0(VAR_9, &VAR_10, "HSS_SET_PKT_MODE");

 VAR_10.cmd = VAR_8;
 VAR_10.data16a = VAR_0;
 FUNC_0(VAR_9, &VAR_10, "HSS_SET_PKT_RX_SIZE");

 VAR_10.cmd = VAR_6;
 VAR_10.data32 = 0x7F7F7F7F;
 FUNC_0(VAR_9, &VAR_10, "HSS_SET_PKT_IDLE");

 VAR_9->initialized = 1;
 return 0;
}
