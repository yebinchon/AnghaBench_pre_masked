
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct isac {scalar_t__ rcvidx; int (* write_isac ) (struct isac*,int ,int ) ;int (* read_isac_fifo ) (struct isac*,int *,int) ;int * rcvbuf; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct isac*,int ,int ) ;
 int FUNC_3 (struct isac*,int *,int) ;
 int FUNC_4 (struct isac*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct isac *VAR_6, int VAR_7)
{


 u_char *VAR_8;

 FUNC_0(VAR_0, "count %d", VAR_7);

 if ((VAR_6->rcvidx + VAR_7) >= VAR_5) {
  FUNC_0(VAR_2, "overrun %d", VAR_6->rcvidx + VAR_7);
  VAR_6->write_isac(VAR_6, VAR_3, VAR_4);
  VAR_6->rcvidx = 0;
  return;
 }
 VAR_8 = VAR_6->rcvbuf + VAR_6->rcvidx;
 VAR_6->rcvidx += VAR_7;
 VAR_6->read_isac_fifo(VAR_6, VAR_8, VAR_7);
 VAR_6->write_isac(VAR_6, VAR_3, VAR_4);
 FUNC_1(VAR_1, VAR_8, VAR_7);
}
