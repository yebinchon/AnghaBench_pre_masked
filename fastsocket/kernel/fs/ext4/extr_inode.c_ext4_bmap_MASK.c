
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct address_space {struct inode* host; } ;
typedef int sector_t ;
typedef int journal_t ;


 int VAR_0 ;
 int * FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct address_space*) ;
 int FUNC_4 (struct address_space*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct address_space*,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;

__attribute__((used)) static sector_t FUNC_10(struct address_space *VAR_4, sector_t VAR_5)
{
 struct inode *VAR_6 = VAR_4->host;
 journal_t *VAR_7;
 int VAR_8;

 if (FUNC_8(VAR_4, VAR_2) &&
   FUNC_9(VAR_6->i_sb, VAR_0)) {





  FUNC_3(VAR_4);
 }

 if (FUNC_0(VAR_6) &&
     FUNC_2(VAR_6, VAR_1)) {
  FUNC_1(VAR_6, VAR_1);
  VAR_7 = FUNC_0(VAR_6);
  FUNC_6(VAR_7);
  VAR_8 = FUNC_5(VAR_7);
  FUNC_7(VAR_7);

  if (VAR_8)
   return 0;
 }

 return FUNC_4(VAR_4, VAR_5, VAR_3);
}
