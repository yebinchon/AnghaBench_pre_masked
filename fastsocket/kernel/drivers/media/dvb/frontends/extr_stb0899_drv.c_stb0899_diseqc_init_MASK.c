
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stb0899_state {int rx_freq; } ;
struct dvb_diseqc_master_cmd {int* msg; int msg_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct stb0899_state*) ;
 int FUNC_2 (struct stb0899_state*,int ) ;
 int FUNC_3 (struct stb0899_state*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct stb0899_state *VAR_5)
{
 struct dvb_diseqc_master_cmd VAR_6;



 u8 VAR_7, VAR_8, VAR_9;

 u32 VAR_10, VAR_11 = 22000;
 VAR_6.msg[0] = 0xe2;
 VAR_6.msg_len = 3;
 VAR_9 = FUNC_2(VAR_5, VAR_3);
 FUNC_0(VAR_1, VAR_9, 0);
 FUNC_3(VAR_5, VAR_3, VAR_9);


 VAR_9 = FUNC_2(VAR_5, VAR_2);
 FUNC_0(VAR_0, VAR_9, 1);
 FUNC_3(VAR_5, VAR_2, VAR_9);

 VAR_9 = FUNC_2(VAR_5, VAR_2);
 FUNC_0(VAR_0, VAR_9, 0);
 FUNC_3(VAR_5, VAR_2, VAR_9);

 VAR_10 = FUNC_1(VAR_5);
 VAR_7 = VAR_10 / (VAR_11 * 32);
 FUNC_3(VAR_5, VAR_4, VAR_7);
 VAR_5->rx_freq = 20000;
 VAR_8 = VAR_10 / (VAR_5->rx_freq * 32);

 return 0;
}
