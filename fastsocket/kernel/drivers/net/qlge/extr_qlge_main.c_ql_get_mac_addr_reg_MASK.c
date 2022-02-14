
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ql_adapter {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int VAR_8 ;
 int FUNC_0 (struct ql_adapter*,int ,int ,char*,int) ;
 void* FUNC_1 (struct ql_adapter*,int ) ;
 int FUNC_2 (struct ql_adapter*,int ,int ,int ) ;
 int FUNC_3 (struct ql_adapter*,int ,int) ;

int FUNC_4(struct ql_adapter *VAR_9, u32 VAR_10, u16 VAR_11,
   u32 *VAR_12)
{
 u32 VAR_13 = 0;
 int VAR_14;

 switch (VAR_10) {
 case 129:
 case 131:
  {
   VAR_14 =
       FUNC_2(VAR_9,
    VAR_3, VAR_6, 0);
   if (VAR_14)
    goto exit;
   FUNC_3(VAR_9, VAR_3, (VAR_13++) |
       (VAR_11 << VAR_4) |
       VAR_1 | VAR_7 | VAR_10);
   VAR_14 =
       FUNC_2(VAR_9,
    VAR_3, VAR_5, 0);
   if (VAR_14)
    goto exit;
   *VAR_12++ = FUNC_1(VAR_9, VAR_2);
   VAR_14 =
       FUNC_2(VAR_9,
    VAR_3, VAR_6, 0);
   if (VAR_14)
    goto exit;
   FUNC_3(VAR_9, VAR_3, (VAR_13++) |
       (VAR_11 << VAR_4) |
       VAR_1 | VAR_7 | VAR_10);
   VAR_14 =
       FUNC_2(VAR_9,
    VAR_3, VAR_5, 0);
   if (VAR_14)
    goto exit;
   *VAR_12++ = FUNC_1(VAR_9, VAR_2);
   if (VAR_10 == 131) {
    VAR_14 =
        FUNC_2(VAR_9,
     VAR_3, VAR_6, 0);
    if (VAR_14)
     goto exit;
    FUNC_3(VAR_9, VAR_3, (VAR_13++) |
        (VAR_11 << VAR_4) |
        VAR_1 | VAR_7 | VAR_10);
    VAR_14 =
        FUNC_2(VAR_9, VAR_3,
          VAR_5, 0);
    if (VAR_14)
     goto exit;
    *VAR_12++ = FUNC_1(VAR_9, VAR_2);
   }
   break;
  }
 case 128:
 case 130:
 default:
  FUNC_0(VAR_9, VAR_8, VAR_9->ndev,
      "Address type %d not yet supported.\n", VAR_10);
  VAR_14 = -VAR_0;
 }
exit:
 return VAR_14;
}
