
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


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
 int FUNC_0 (int *) ;
 int FUNC_1 (void*,int,int) ;
 scalar_t__ FUNC_2 (char*,char*,int,...) ;
 scalar_t__ FUNC_3 (char*,char*,unsigned char*,int) ;
 scalar_t__ FUNC_4 (char*,char*,unsigned int*,int) ;
 int FUNC_5 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 () ;
 int FUNC_7 (int*) ;
 int FUNC_8 (unsigned char*) ;
 int FUNC_9 () ;
 int FUNC_10 (unsigned char*) ;

__attribute__((used)) static int FUNC_11(char *VAR_15, char **VAR_16, off_t VAR_17,
         int VAR_18, int *VAR_19, void *VAR_20)
{
 unsigned char *VAR_21;
 int VAR_22;

 VAR_22 = 0;


 VAR_21 = VAR_15 + 2000;
 VAR_22 += FUNC_2(VAR_15 + VAR_22, "\nzcrypt version: %d.%d.%d\n",
  VAR_11, VAR_9, VAR_10);
 VAR_22 += FUNC_2(VAR_15 + VAR_22, "Cryptographic domain: %d\n",
         VAR_12);
 VAR_22 += FUNC_2(VAR_15 + VAR_22, "Total device count: %d\n",
         VAR_13);
 VAR_22 += FUNC_2(VAR_15 + VAR_22, "PCICA count: %d\n",
         FUNC_5(VAR_5));
 VAR_22 += FUNC_2(VAR_15 + VAR_22, "PCICC count: %d\n",
         FUNC_5(VAR_6));
 VAR_22 += FUNC_2(VAR_15 + VAR_22, "PCIXCC MCL2 count: %d\n",
         FUNC_5(VAR_7));
 VAR_22 += FUNC_2(VAR_15 + VAR_22, "PCIXCC MCL3 count: %d\n",
         FUNC_5(VAR_8));
 VAR_22 += FUNC_2(VAR_15 + VAR_22, "CEX2C count: %d\n",
         FUNC_5(VAR_2));
 VAR_22 += FUNC_2(VAR_15 + VAR_22, "CEX2A count: %d\n",
         FUNC_5(VAR_1));
 VAR_22 += FUNC_2(VAR_15 + VAR_22, "CEX3C count: %d\n",
         FUNC_5(VAR_4));
 VAR_22 += FUNC_2(VAR_15 + VAR_22, "CEX3A count: %d\n",
         FUNC_5(VAR_3));
 VAR_22 += FUNC_2(VAR_15 + VAR_22, "requestq count: %d\n",
         FUNC_9());
 VAR_22 += FUNC_2(VAR_15 + VAR_22, "pendingq count: %d\n",
         FUNC_6());
 VAR_22 += FUNC_2(VAR_15 + VAR_22, "Total open handles: %d\n\n",
         FUNC_0(&VAR_14));
 FUNC_10(VAR_21);
 VAR_22 += FUNC_3("Online devices: 1=PCICA 2=PCICC 3=PCIXCC(MCL2) "
   "4=PCIXCC(MCL3) 5=CEX2C 6=CEX2A 7=CEX3C 8=CEX3A",
   VAR_15+VAR_22, VAR_21, VAR_0);
 FUNC_8(VAR_21);
 VAR_22 += FUNC_3("Waiting work element counts",
   VAR_15+VAR_22, VAR_21, VAR_0);
 FUNC_7((int *) VAR_21);
 VAR_22 += FUNC_4("Per-device successfully completed request counts",
    VAR_15+VAR_22,(unsigned int *) VAR_21, VAR_0);
 *VAR_19 = 1;
 FUNC_1((void *) VAR_21, 0x00, VAR_0 * sizeof(unsigned int));
 return VAR_22;
}
