
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r1conf {scalar_t__ next_resync; int r1buf_pool; int poolinfo; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct r1conf *VAR_5)
{
 int VAR_6;

 VAR_6 = VAR_2 / VAR_1;
 FUNC_0(VAR_5->r1buf_pool);
 VAR_5->r1buf_pool = FUNC_1(VAR_6, VAR_3, VAR_4,
       VAR_5->poolinfo);
 if (!VAR_5->r1buf_pool)
  return -VAR_0;
 VAR_5->next_resync = 0;
 return 0;
}
