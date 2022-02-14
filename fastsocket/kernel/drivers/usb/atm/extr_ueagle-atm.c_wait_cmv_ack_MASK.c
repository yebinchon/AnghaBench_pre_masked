
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uea_softc {scalar_t__ cmv_ack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uea_softc*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct uea_softc*,scalar_t__,int ) ;

__attribute__((used)) static inline int FUNC_4(struct uea_softc *VAR_2)
{
 int VAR_3 = FUNC_3(VAR_2, VAR_2->cmv_ack , VAR_0);

 VAR_2->cmv_ack = 0;

 FUNC_2(FUNC_0(VAR_2), "wait_event_timeout : %d ms\n",
   FUNC_1(VAR_3));

 if (VAR_3 < 0)
  return VAR_3;

 return (VAR_3 == 0) ? -VAR_1 : 0;
}
