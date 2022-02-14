
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {scalar_t__* sock; scalar_t__* tempsock; int data; int connection_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct connectdata*,scalar_t__) ;
 int FUNC_1 (int ,struct connectdata*,int ) ;
 int FUNC_2 (struct connectdata*) ;
 int FUNC_3 (struct connectdata*,size_t) ;
 int FUNC_4 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_6(struct connectdata *VAR_4)
{
  if(!VAR_4)
    return;

  FUNC_5(VAR_4->data, "Closing connection %ld\n", VAR_4->connection_id);
  FUNC_4(VAR_4->data);


  FUNC_2(VAR_4);



  FUNC_3(VAR_4, VAR_1);
  FUNC_3(VAR_4, VAR_2);


  if(VAR_0 != VAR_4->sock[VAR_2])
    FUNC_0(VAR_4, VAR_4->sock[VAR_2]);
  if(VAR_0 != VAR_4->sock[VAR_1])
    FUNC_0(VAR_4, VAR_4->sock[VAR_1]);
  if(VAR_0 != VAR_4->tempsock[0])
    FUNC_0(VAR_4, VAR_4->tempsock[0]);
  if(VAR_0 != VAR_4->tempsock[1])
    FUNC_0(VAR_4, VAR_4->tempsock[1]);



  FUNC_1(VAR_4->data, VAR_4, VAR_3);
}
