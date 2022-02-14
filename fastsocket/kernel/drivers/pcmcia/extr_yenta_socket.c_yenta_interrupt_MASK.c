
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct yenta_socket {int socket; } ;
typedef int irqreturn_t ;


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
 int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 int FUNC_0 (struct yenta_socket*,int ) ;
 int FUNC_1 (struct yenta_socket*,int ,int) ;
 int FUNC_2 (struct yenta_socket*,int ) ;
 int FUNC_3 (int *,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_18, void *VAR_19)
{
 unsigned int VAR_20;
 struct yenta_socket *VAR_21 = (struct yenta_socket *) VAR_19;
 u8 VAR_22;
 u32 VAR_23;


 VAR_23 = FUNC_0(VAR_21, VAR_2);
 FUNC_1(VAR_21, VAR_2, VAR_23);

 VAR_22 = FUNC_2(VAR_21, VAR_3);

 if (!(VAR_23 || VAR_22))
  return VAR_12;

 VAR_20 = (VAR_23 & (VAR_0 | VAR_1)) ? VAR_15 : 0 ;
 VAR_20 |= (VAR_22 & VAR_6) ? VAR_15 : 0;
 if (FUNC_2(VAR_21, VAR_9) & VAR_10) {
  VAR_20 |= (VAR_22 & VAR_8) ? VAR_17 : 0;
 } else {
  VAR_20 |= (VAR_22 & VAR_4) ? VAR_13 : 0;
  VAR_20 |= (VAR_22 & VAR_5) ? VAR_14 : 0;
  VAR_20 |= (VAR_22 & VAR_7) ? VAR_16 : 0;
 }

 if (VAR_20)
  FUNC_3(&VAR_21->socket, VAR_20);

 return VAR_11;
}
