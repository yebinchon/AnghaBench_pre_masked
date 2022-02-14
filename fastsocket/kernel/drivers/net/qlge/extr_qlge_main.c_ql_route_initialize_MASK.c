
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int rss_ring_count; int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_1 (struct ql_adapter*) ;
 int FUNC_2 (struct ql_adapter*,int ) ;
 int FUNC_3 (struct ql_adapter*,int ) ;
 int FUNC_4 (struct ql_adapter*,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct ql_adapter *VAR_12)
{
 int VAR_13 = 0;


 VAR_13 = FUNC_1(VAR_12);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_2(VAR_12, VAR_10);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_4(VAR_12, VAR_5,
      VAR_4, 1);
 if (VAR_13) {
  FUNC_0(VAR_12, VAR_11, VAR_12->ndev, "Failed to init routing"
   " register for IP CSUM error packets.\n");
  goto exit;
 }
 VAR_13 = FUNC_4(VAR_12, VAR_8,
      VAR_9, 1);
 if (VAR_13) {
  FUNC_0(VAR_12, VAR_11, VAR_12->ndev, "Failed to init routing"
   " register for TCP/UDP CSUM error packets.\n");
  goto exit;
 }
 VAR_13 = FUNC_4(VAR_12, VAR_1, VAR_0, 1);
 if (VAR_13) {
  FUNC_0(VAR_12, VAR_11, VAR_12->ndev,
     "Failed to init routing register for broadcast packets.\n");
  goto exit;
 }



 if (VAR_12->rss_ring_count > 1) {
  VAR_13 = FUNC_4(VAR_12, VAR_7,
     VAR_6, 1);
  if (VAR_13) {
   FUNC_0(VAR_12, VAR_11, VAR_12->ndev,
      "Failed to init routing register for MATCH RSS packets.\n");
   goto exit;
  }
 }

 VAR_13 = FUNC_4(VAR_12, VAR_3,
        VAR_2, 1);
 if (VAR_13)
  FUNC_0(VAR_12, VAR_11, VAR_12->ndev,
     "Failed to init routing register for CAM packets.\n");
exit:
 FUNC_3(VAR_12, VAR_10);
 return VAR_13;
}
