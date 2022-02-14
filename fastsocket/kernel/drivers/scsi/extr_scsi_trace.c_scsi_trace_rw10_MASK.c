
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {char* buffer; int len; } ;
typedef unsigned char sector_t ;


 int FUNC_0 (struct trace_seq*,char*,unsigned long long,unsigned long long,unsigned char) ;
 int FUNC_1 (struct trace_seq*,int ) ;

__attribute__((used)) static const char *
FUNC_2(struct trace_seq *VAR_0, unsigned char *VAR_1, int VAR_2)
{
 const char *VAR_3 = VAR_0->buffer + VAR_0->len;
 sector_t VAR_4 = 0, VAR_5 = 0;

 VAR_4 |= (VAR_1[2] << 24);
 VAR_4 |= (VAR_1[3] << 16);
 VAR_4 |= (VAR_1[4] << 8);
 VAR_4 |= VAR_1[5];
 VAR_5 |= (VAR_1[7] << 8);
 VAR_5 |= VAR_1[8];

 FUNC_0(VAR_0, "lba=%llu txlen=%llu protect=%u",
    (unsigned long long)VAR_4, (unsigned long long)VAR_5,
    VAR_1[1] >> 5);
 FUNC_1(VAR_0, 0);

 return VAR_3;
}
