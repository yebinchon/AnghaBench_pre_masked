
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; } ;


 unsigned int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,struct page*) ;
 int FUNC_3 (void*,void*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned long) ;
 unsigned long VAR_3 ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (scalar_t__,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 unsigned long VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_14(struct page *VAR_6,
 struct page *VAR_7, unsigned long VAR_8)
{
 unsigned int VAR_9 = FUNC_0(VAR_8);
 unsigned long VAR_10, VAR_11;

 if (FUNC_13(VAR_2, &VAR_7->flags))
  FUNC_2(FUNC_7(VAR_7), VAR_7);


 FUNC_4(FUNC_6(VAR_6));





 FUNC_11(&VAR_5);

 FUNC_10(FUNC_1(VAR_3) + VAR_9, FUNC_9(FUNC_8(VAR_7), VAR_0), 0);
 FUNC_10(FUNC_1(VAR_4) + VAR_9, FUNC_9(FUNC_8(VAR_6), VAR_0), 0);

 VAR_10 = VAR_3 + (VAR_9 << VAR_1);
 VAR_11 = VAR_4 + (VAR_9 << VAR_1);

 FUNC_5(VAR_10);
 FUNC_5(VAR_11);

 FUNC_3((void *)VAR_11, (void *)VAR_10);

 FUNC_12(&VAR_5);
}
