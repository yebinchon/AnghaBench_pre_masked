
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pcmcia_socket {size_t fake_cis_len; int * fake_cis; int dev; } ;


 size_t const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (size_t const,int ) ;
 int FUNC_3 (int *,int const*,size_t const) ;

int FUNC_4(struct pcmcia_socket *VAR_5,
         const u8 *VAR_6, const size_t VAR_7)
{
 if (VAR_7 > VAR_0) {
  FUNC_0(VAR_4, &VAR_5->dev, "replacement CIS too big\n");
  return -VAR_1;
 }
 FUNC_1(VAR_5->fake_cis);
 VAR_5->fake_cis = FUNC_2(VAR_7, VAR_3);
 if (VAR_5->fake_cis == ((void*)0)) {
  FUNC_0(VAR_4, &VAR_5->dev, "no memory to replace CIS\n");
  return -VAR_2;
 }
 VAR_5->fake_cis_len = VAR_7;
 FUNC_3(VAR_5->fake_cis, VAR_6, VAR_7);
 return 0;
}
